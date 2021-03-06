//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPasteboard.h>

@interface UIPasteboard (SafariServicesExtras)
- (void)safari_setSensitiveString:(id)arg1;	// IMP=0x000000000006040c
@property(readonly, nonatomic) _Bool safari_canPasteAndNavigate;
- (id)safari_pasteAndNavigateCommand;	// IMP=0x00000000000602e1
- (id)safari_pasteAndNavigateMenuItem;	// IMP=0x000000000006020d
- (id)safari_pasteAndNavigateButtonTitle;	// IMP=0x00000000000601af
- (unsigned long long)safari_bestInputTypeForPastingIntoURLField;	// IMP=0x00000000000600e5
- (id)safari_bestStringForPastingIntoURLField;	// IMP=0x000000000005ffb7
@end

