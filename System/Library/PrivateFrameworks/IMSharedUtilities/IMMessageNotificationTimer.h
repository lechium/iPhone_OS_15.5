//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

@interface IMMessageNotificationTimer : NSObject
{
    NSDate *_date;	// 8 = 0x8
    NSNumber *_numberDingsLeft;	// 16 = 0x10
}

@property(readonly, nonatomic) NSNumber *numberDingsLeft; // @synthesize numberDingsLeft=_numberDingsLeft;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)reduceNumberDingsLeft;	// IMP=0x000000000006c566
@property(readonly, nonatomic) _Bool areDingsRemaining;
- (void)dealloc;	// IMP=0x000000000006c500
- (id)initWithDate:(id)arg1;	// IMP=0x000000000006c49a

@end
