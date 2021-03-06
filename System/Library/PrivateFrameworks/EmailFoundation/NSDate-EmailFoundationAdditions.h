//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

#import <EmailFoundation/EFSQLBindable-Protocol.h>
#import <EmailFoundation/EFSQLValueExpressable-Protocol.h>

@class EFSQLBinding, NSString;

@interface NSDate (EmailFoundationAdditions) <EFSQLBindable, EFSQLValueExpressable>
+ (id)_ef_gregorianCalendarForTimeZone:(id)arg1;	// IMP=0x000000000001b05f
+ (id)_ef_morningDateComponents;	// IMP=0x000000000001aff0
+ (id)_ef_nightDateComponents;	// IMP=0x000000000001af81
+ (id)ef_nextWeekMorning;	// IMP=0x000000000001ae1e
+ (id)ef_tomorrowMorning;	// IMP=0x000000000001acbb
+ (id)_ef_tonight:(id)arg1;	// IMP=0x000000000001ab88
+ (id)ef_tonight;	// IMP=0x000000000001ab07
+ (_Bool)ef_isPastTonight;	// IMP=0x000000000001aa2a
- (double)ef_timeIntervalSinceDate:(id)arg1;	// IMP=0x000000000001a9c3
- (_Bool)ef_isLaterThanDate:(id)arg1;	// IMP=0x000000000001a9a9
- (_Bool)ef_isEarlierThanDate:(id)arg1;	// IMP=0x000000000001a98f
- (_Bool)ef_isMoreThanTimeIntervalAgo:(double)arg1;	// IMP=0x000000000001a95f
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
- (id)ef_SQLIsolatedExpression;	// IMP=0x000000000003c006
- (void)ef_renderSQLExpressionInto:(id)arg1;	// IMP=0x000000000003bf9c
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

