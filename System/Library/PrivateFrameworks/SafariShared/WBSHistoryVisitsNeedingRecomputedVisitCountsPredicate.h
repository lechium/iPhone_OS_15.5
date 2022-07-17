//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryVisitPredicate-Protocol.h>

@class NSString;

@interface WBSHistoryVisitsNeedingRecomputedVisitCountsPredicate : NSObject <WBSHistoryVisitPredicate>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e803f
- (_Bool)evaluateServiceVisit:(id)arg1;	// IMP=0x00000000000e8037
- (_Bool)evaluateVisit:(id)arg1;	// IMP=0x00000000000e7fdc
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000e7fad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e7fa7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e7f78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
