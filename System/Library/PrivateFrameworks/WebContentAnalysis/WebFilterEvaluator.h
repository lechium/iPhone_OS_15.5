//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebContentAnalysis/NSSecureCoding-Protocol.h>
#import <WebContentAnalysis/WFPINEntryViewControllerProtocol-Protocol.h>

@class NSMutableData, NSString, NSURL, WFRemotePINEntryViewController;

@interface WebFilterEvaluator : NSObject <WFPINEntryViewControllerProtocol, NSSecureCoding>
{
    unsigned long long _filterState;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_pageTitle;	// 24 = 0x18
    NSMutableData *_buffer;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
    WFRemotePINEntryViewController *_remoteViewController;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c441
+ (id)createWithResponse:(id)arg1;	// IMP=0x000000000000b518
+ (_Bool)isManagedSession;	// IMP=0x000000000000b508
@property(retain, nonatomic) WFRemotePINEntryViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)userDidCancel;	// IMP=0x000000000000c679
- (void)userEnteredCorrectPIN;	// IMP=0x000000000000c5ca
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c4e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c449
- (void)unblockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bf44
- (void)attemptUnblockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000be78
- (_Bool)wasBlocked;	// IMP=0x000000000000be6a
- (int)filterState;	// IMP=0x000000000000be31
- (id)dataComplete;	// IMP=0x000000000000be1d
- (id)addData:(id)arg1;	// IMP=0x000000000000b64a
- (void)dealloc;	// IMP=0x000000000000b5f9
- (id)initWithResponse:(id)arg1;	// IMP=0x000000000000b570
- (id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2;	// IMP=0x000000000000b059
- (id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3;	// IMP=0x000000000000b02a

@end

