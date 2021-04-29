using ProjLogin.DAL;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ProjLogin.Modelo
{
    public class Controle
    {
        public bool tem;
        public String mensagem = "";

        public bool Acessar (String login, String senha)
        {
            LoginDAO loginDAO = new LoginDAO();
            tem = loginDAO.VerifLogin(login, senha); // receber a chamada do método verificar

            if (!loginDAO.mensagem.Equals(""))
            {
                this.mensagem = loginDAO.mensagem;
            }

            return tem;
        }

        

        public String Cadastrar (String email, String senha, String confSenha)
        {
            LoginDAO loginDAO = new LoginDAO();
            this.mensagem = loginDAO.Cadastrar(email, senha, confSenha);
            if (loginDAO.tem)
            {
                this.tem = true; 
            }
            return mensagem;
        }
    }
}
