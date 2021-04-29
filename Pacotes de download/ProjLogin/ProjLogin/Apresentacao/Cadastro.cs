using ProjLogin.Modelo;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ProjLogin.Apresentacao
{
    public partial class Cadastro : Form
    {
        public Cadastro()
        {
            InitializeComponent();
        }
    
        private void btnCadastrar_Click(object sender, EventArgs e)
        {
            Controle controle = new Controle();
            String mensagem = controle.Cadastrar(txtLogin.Text, txtSenha.Text, txtConfirmarSenha.Text);
            if (controle.tem)
            {
                MessageBox.Show(mensagem, "Cadastro", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                MessageBox.Show(controle.mensagem);
            }
        }
    }
}
