//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrivacyAccounting/PAAccessRecordCoalescingState-Protocol.h>

@class NSArray, NSString;

@interface PAAccessRecordCoalescingDoneState : NSObject <PAAccessRecordCoalescingState>
{
    NSArray *_groupedRecordsToRepublish;	// 8 = 0x8
    _Bool _reversed;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012a69
- (id)recordsToRepublish;	// IMP=0x0000000000012a54
- (id)initByEndingLastWindow:(id)arg1 reversed:(_Bool)arg2;	// IMP=0x0000000000012975

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

