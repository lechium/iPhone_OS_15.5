//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface AllRefinementsViewModelSectionToggles : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSArray *_toggles;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000088a5f9
@property(readonly, nonatomic) NSArray *toggles; // @synthesize toggles=_toggles;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000088a511
- (id)initWithToggles:(id)arg1 displayName:(id)arg2;	// IMP=0x001000000088a456

@end

