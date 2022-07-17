//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class ICSDateValue, NSString;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem
{
    _Bool _hadMoreInstances;	// 49 = 0x31
    NSString *_componentType;	// 56 = 0x38
    NSString *_summary;	// 64 = 0x40
    NSString *_displayName;	// 72 = 0x48
    ICSDateValue *_nextInstance;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000004214f
@property(nonatomic) _Bool hadMoreInstances; // @synthesize hadMoreInstances=_hadMoreInstances;
@property(retain, nonatomic) ICSDateValue *nextInstance; // @synthesize nextInstance=_nextInstance;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *componentType; // @synthesize componentType=_componentType;
- (id)copyParseRules;	// IMP=0x0000000000041d69
- (void)setHadMoreInstancesItem:(id)arg1;	// IMP=0x0000000000041d52
- (void)setNextInstanceItem:(id)arg1;	// IMP=0x0000000000041ccd
- (void)setDisplayNameItem:(id)arg1;	// IMP=0x0000000000041c7e
- (void)setSummaryItem:(id)arg1;	// IMP=0x0000000000041c2f
- (void)setComponentTypeItem:(id)arg1;	// IMP=0x0000000000041be0
- (id)init;	// IMP=0x0000000000041bba

@end
