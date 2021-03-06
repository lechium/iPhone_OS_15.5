//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, UIColor;
@protocol TTRIRecurrenceChooserControllerDelegate;

@interface TTRIRecurrenceChooserController : NSObject
{
    id <TTRIRecurrenceChooserControllerDelegate> _delegate;	// 8 = 0x8
    UIColor *_backgroundColor;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

+ (int)dayFromNumber:(long long)arg1;	// IMP=0x0040000000016ffe
- (void).cxx_destruct;	// IMP=0x0020000000017193
@property(copy) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property __weak id <TTRIRecurrenceChooserControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)drawBackgroundForRow:(long long)arg1;	// IMP=0x0010000000017128
- (void);	// IMP=0x0010000000017122
- (id)cellForRow:(long long)arg1;	// IMP=0x00100000003e4b0f
- (double)heightForRow:(long long)arg1;	// IMP=0x0010000000017111
- (long long)numberOfRows;	// IMP=0x0010000000017106
@property(readonly, nonatomic) long long frequency;
- (void)updateFromRecurrenceRule:(id)arg1;	// IMP=0x0010000000017100
- (void)updateRecurrenceRuleBuilder:(id)arg1;	// IMP=0x00100000000170fa
- (void)notifyDelegate;	// IMP=0x00100000000170ae
- (id)startDateComponents:(unsigned long long)arg1;	// IMP=0x001000000001701b
- (id)initWithDate:(id)arg1;	// IMP=0x0010000000016fac

@end

