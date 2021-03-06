//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKCalendar, EKGroupInfo, NSString, UIColor, UIImage;

@interface EKCalendarInfo : NSObject
{
    NSString *_title;	// 8 = 0x8
    _Bool _selected;	// 16 = 0x10
    _Bool _isEnabled;	// 17 = 0x11
    EKCalendar *_calendar;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
    EKGroupInfo *_group;	// 40 = 0x28
    unsigned long long _customGroupType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005ab7f
@property(nonatomic) unsigned long long customGroupType; // @synthesize customGroupType=_customGroupType;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) __weak EKGroupInfo *group; // @synthesize group=_group;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) UIImage *highlightedIcon;
@property(readonly, nonatomic) UIImage *icon;
- (id)description;	// IMP=0x000000000005aa5d
@property(readonly, nonatomic) _Bool excludeFromSelectAll;
@property(readonly, nonatomic) _Bool isEditable;
@property(readonly, nonatomic) _Bool isPublished;
@property(readonly, nonatomic) _Bool isShared;
@property(readonly, nonatomic) _Bool isSubscribed;
@property(readonly, nonatomic) int displayOrder;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithCalendar:(id)arg1;	// IMP=0x000000000005a88d
- (void)_updateCustomGroupType;	// IMP=0x000000000005a81a

@end

