//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NPKPassSelectionFieldDetectorAssertionDelegate-Protocol.h>

@class NPKPassSelectionFieldDetectorAssertion, NSString;

@interface NPKRemotePassSelectionFieldDetectorListener <NPKPassSelectionFieldDetectorAssertionDelegate>
{
    NPKPassSelectionFieldDetectorAssertion *_assertion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010b2f3
- (void)passSelectionFieldDetectorAssertion:(id)arg1 didEnterFieldForPassWithUniqueID:(id)arg2;	// IMP=0x000000000010b1e0
- (id)init;	// IMP=0x000000000010b0b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
