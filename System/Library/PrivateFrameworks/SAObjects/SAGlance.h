//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface SAGlance
{
}

+ (id)glanceWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000742a
+ (id)glance;	// IMP=0x0000000000007418
@property(copy, nonatomic) NSDictionary *localizedGlanceDisplayNameMap;
@property(copy, nonatomic) NSString *glanceId;
@property(copy, nonatomic) NSString *glanceDisplayName;
@property(copy, nonatomic) NSString *appId;
- (id)encodedClassName;	// IMP=0x000000000000740b
- (id)groupIdentifier;	// IMP=0x00000000000073f7

@end
