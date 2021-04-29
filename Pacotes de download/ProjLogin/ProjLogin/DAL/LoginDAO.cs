using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjLogin.DAL
{
    class LoginDAO
    {
        public bool tem = false;
        public String mensagem = "";

        SqlCommand cmd = new SqlCommand();
        Conexao conexao = new Conexao();
        SqlDataReader dr;

        public bool VerifLogin(String login, String senha)
        {
            //comandos sql para verificar se tem no bd
            cmd.CommandText = "select * from logins where email = @login and senha = @senha";
            cmd.Parameters.AddWithValue("@login", login);
            cmd.Parameters.AddWithValue("@senha", senha);

            try
            {
                cmd.Connection = conexao.Conectar();
                //cmd.ExecuteReader(); //pega informações do bd para serem guardadas
                dr = cmd.ExecuteReader();

                if (dr.HasRows) // se for encontrado o login e senha
                {
                    tem = true;
                }
                conexao.Desconectar();
                dr.Close();

            }

            catch (SqlException)
            {

                this.mensagem = "Erro com o Banco de Dados!";
            }

            return tem;
        }

        public String Cadastrar(String email, String senha, String confSenha)
        {
            tem = false;
            //comandos para inserir
            if (senha.Equals(confSenha))
            {
                cmd.CommandText = "insert into logins values (@e, @s)";
                cmd.Parameters.AddWithValue("@e", email);
                cmd.Parameters.AddWithValue("@s", senha);

                try
                {
                    cmd.Connection = conexao.Conectar();
                    cmd.ExecuteNonQuery(); //insere valores
                    conexao.Desconectar();
                    this.mensagem = "Cadastrado com sucesso!";
                    tem = true;
                }
                catch (SqlException)
                {

                    this.mensagem = "Erro com o Banco de Dados";
                }
            }
            else
            {
                this.mensagem = "Senhas não correspondentes";
            }
            return mensagem;
        }

    }
}   

