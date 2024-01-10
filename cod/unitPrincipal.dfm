object fPrincipal: TfPrincipal
  Left = 239
  Top = 136
  Width = 1045
  Height = 522
  Caption = 'ASC-BMP'
  Color = clSilver
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object imgInput: TImage
    Left = 0
    Top = 0
    Width = 393
    Height = 273
  end
  object imgOutput: TImage
    Left = 640
    Top = 0
    Width = 393
    Height = 273
  end
  object btnGenImagine: TButton
    Left = 704
    Top = 296
    Width = 105
    Height = 73
    Caption = 'Generare imagine'
    TabOrder = 0
    OnClick = btnGenImagineClick
  end
  object btnGenText: TButton
    Left = 704
    Top = 368
    Width = 105
    Height = 73
    Caption = 'Generare text'
    TabOrder = 1
    OnClick = btnGenTextClick
  end
  object btnSablon: TButton
    Left = 152
    Top = 304
    Width = 145
    Height = 57
    Caption = 'Alegere imagine sablon'
    TabOrder = 2
    OnClick = btnSablonClick
  end
  object checkBoxMode: TCheckBox
    Left = 152
    Top = 360
    Width = 145
    Height = 57
    Caption = 'Mod creativ'
    TabOrder = 3
  end
  object editInput: TMemo
    Left = 392
    Top = 0
    Width = 249
    Height = 273
    Color = clMenu
    Lines.Strings = (
      'editInput')
    ScrollBars = ssVertical
    TabOrder = 4
  end
  object btnExit: TButton
    Left = 456
    Top = 304
    Width = 113
    Height = 57
    Caption = 'Exit'
    TabOrder = 5
    OnClick = btnExitClick
  end
  object openPicDialogText: TOpenPictureDialog
    Left = 816
    Top = 408
  end
  object openPicDialog: TOpenPictureDialog
    Left = 304
    Top = 408
  end
end
