//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSLogTransferSpinnerButton, NSSManager, NSString, UIButton, UIColor;

@interface COSDiagnosticLogDownloadCell
{
    _Bool _notifiedOwnerCompleteTransfer;	// 144 = 0x90
    COSLogTransferSpinnerButton *_logTransferSpinnerButton;	// 152 = 0x98
    UIButton *_downloadIconButton;	// 160 = 0xa0
    UIColor *_enabledColor;	// 168 = 0xa8
    NSSManager *_nssManager;	// 176 = 0xb0
    NSString *_fileName;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0020000000062716
@property(nonatomic) _Bool notifiedOwnerCompleteTransfer; // @synthesize notifiedOwnerCompleteTransfer=_notifiedOwnerCompleteTransfer;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
@property(retain, nonatomic) UIColor *enabledColor; // @synthesize enabledColor=_enabledColor;
@property(retain, nonatomic) UIButton *downloadIconButton; // @synthesize downloadIconButton=_downloadIconButton;
@property(retain, nonatomic) COSLogTransferSpinnerButton *logTransferSpinnerButton; // @synthesize logTransferSpinnerButton=_logTransferSpinnerButton;
- (void)updateProgress:(unsigned long long)arg1;	// IMP=0x0010000000062595
- (void)checkForFileTransferProgress;	// IMP=0x001000000006213c
- (void)listenForLogTransferProgress;	// IMP=0x00100000000620f1
- (void)layoutSubviews;	// IMP=0x001000000006197b
- (void)dealloc;	// IMP=0x0010000000061910
- (void)notifyDownload:(id)arg1;	// IMP=0x001000000006183e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x001000000006159f

@end
