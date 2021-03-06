//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BBSectionIcon, NSDictionary, NSString;

@interface BLTSectionInfoListItem : NSObject
{
    NSDictionary *_overrides;	// 8 = 0x8
    NSString *_universalSectionID;	// 16 = 0x10
    NSString *_overriddenFactorySectionID;	// 24 = 0x18
    NSString *_phoneSectionID;	// 32 = 0x20
    NSString *_overriddenDisplayName;	// 40 = 0x28
    BBSectionIcon *_overriddenIcon;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000604a2
@property(copy) BBSectionIcon *overriddenIcon; // @synthesize overriddenIcon=_overriddenIcon;
@property(copy) NSString *overriddenDisplayName; // @synthesize overriddenDisplayName=_overriddenDisplayName;
@property(copy) NSString *phoneSectionID; // @synthesize phoneSectionID=_phoneSectionID;
@property(copy) NSString *overriddenFactorySectionID; // @synthesize overriddenFactorySectionID=_overriddenFactorySectionID;
@property(copy) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
@property(retain) NSDictionary *overrides; // @synthesize overrides=_overrides;

@end

