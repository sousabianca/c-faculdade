using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjLogin.DAL
{
    public class Conexao
    {
        SqlConnection conexao = new SqlConnection();

        public Conexao()
        {
            conexao.ConnectionString = @"Data Source=MOONBI;Initial Catalog=ProjetoLogin;Integrated Security=True";
        }

        public SqlConnection Conectar()
        {
            //verificar se já está conectado
            if (conexao.State == System.Data.ConnectionState.Closed)
            {
                conexao.Open();
            }
            return conexao;
        }

        public void Desconectar()
        {
            if (conexao.State == System.Data.ConnectionState.Open)
            {
                conexao.Close();
            }
        }
    }
}
