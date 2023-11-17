Public Class Main
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        ToolStripMenuItem2.Enabled = False
        ToolStripMenuItem2.Text = "???"

        If Not CheckBox1.Checked And Not CheckBox2.Checked Then
            PictureBox1.Image = My.Resources.hacker
        ElseIf Not CheckBox1.Checked And CheckBox2.Checked Then
            PictureBox1.Image = My.Resources.HAMBURGUESA_ONG
        ElseIf CheckBox1.Checked And Not CheckBox2.Checked Then
            PictureBox1.Image = My.Resources.pepsi
            ToolStripMenuItem2.Enabled = True
            ToolStripMenuItem2.Text = "Pepsi"
        ElseIf CheckBox1.Checked And CheckBox2.Checked Then
            PictureBox1.Image = My.Resources.we_live_we_love_we_lie
        End If
    End Sub

    Private Sub SalirToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles SalirToolStripMenuItem.Click
        Me.Hide()
    End Sub

    Private Sub AcercaDeToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles AcercaDeToolStripMenuItem.Click
        AcercaDe.Show()
    End Sub

    Private Sub ToolStripMenuItem2_Click(sender As Object, e As EventArgs) Handles ToolStripMenuItem2.Click
        Pepsi.Show()
    End Sub
End Class
