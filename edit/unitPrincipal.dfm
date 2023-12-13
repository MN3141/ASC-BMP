object fPrincipal: TfPrincipal
  Left = 257
  Top = 158
  Width = 1044
  Height = 515
  Caption = 'IPRS'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object titleLabel: TLabel
    Left = 384
    Top = 24
    Width = 47
    Height = 13
    Caption = 'ASC-BMP'
  end
  object imgOriginal: TImage
    Left = 32
    Top = 16
    Width = 353
    Height = 201
  end
  object imgCodificat: TImage
    Left = 632
    Top = 16
    Width = 353
    Height = 201
  end
  object btnGenImagine: TButton
    Left = 416
    Top = 168
    Width = 153
    Height = 81
    Caption = 'Generare imagine'
    TabOrder = 0
    OnClick = btnGenImagineClick
  end
  object btnGenText: TButton
    Left = 536
    Top = 296
    Width = 153
    Height = 81
    Caption = 'Generare text'
    TabOrder = 1
    OnClick = btnGenTextClick
  end
  object btnLoad: TButton
    Left = 40
    Top = 328
    Width = 105
    Height = 33
    Caption = 'Incarca Image'
    TabOrder = 2
    OnClick = btnLoadClick
  end
  object btnCodificare: TButton
    Left = 184
    Top = 328
    Width = 75
    Height = 25
    Caption = 'Codificare Mesaj'
    TabOrder = 3
    OnClick = btnCodificareClick
  end
  object eMesaj: TEdit
    Left = 504
    Top = 16
    Width = 121
    Height = 21
    TabOrder = 4
    Text = 'Mesaj'
  end
  object ODFiles: TOpenDialog
    Filter = 'BMP Files|*.bmp'
    Left = 80
    Top = 408
  end
end
