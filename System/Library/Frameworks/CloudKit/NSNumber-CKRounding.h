//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

#import <CloudKit/CKRecordValue-Protocol.h>

@class NSString;

@interface NSNumber (CKRounding) <CKRecordValue>
- (id)CKRoundedToMaximumDecimalPlaces:(unsigned long long)arg1;	// IMP=0x00000000000428c5
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000127fc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
