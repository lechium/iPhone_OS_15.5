//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSXPCSecureCoding-Protocol.h>

@class BSMachPortSendRight, NSString;

@interface SBSFocusModesHomeScreenSnapshot : NSObject <BSXPCSecureCoding>
{
    _Bool _wantsListVisible;	// 8 = 0x8
    NSString *_listIdentifier;	// 16 = 0x10
    NSString *_focusModeIdentifier;	// 24 = 0x18
    BSMachPortSendRight *_machPortSendRight;	// 32 = 0x20
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0000000000016f5e
- (void).cxx_destruct;	// IMP=0x0000000000017197
@property(nonatomic) _Bool wantsListVisible; // @synthesize wantsListVisible=_wantsListVisible;
@property(retain, nonatomic) BSMachPortSendRight *machPortSendRight; // @synthesize machPortSendRight=_machPortSendRight;
@property(copy, nonatomic) NSString *focusModeIdentifier; // @synthesize focusModeIdentifier=_focusModeIdentifier;
@property(copy, nonatomic) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000017000
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000016f66
- (id)initWithListIdentifier:(id)arg1 focusModeIdentifier:(id)arg2 machPortSendRight:(id)arg3;	// IMP=0x0000000000016e78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
