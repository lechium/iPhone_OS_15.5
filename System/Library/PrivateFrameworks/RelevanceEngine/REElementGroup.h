//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class NSString;

@interface REElementGroup : NSObject <REAutomaticExportedInterface, NSCopying>
{
    NSString *_groupIdentifier;	// 8 = 0x8
    unsigned long long _behavior;	// 16 = 0x10
    long long _maxElementCount;	// 24 = 0x18
}

+ (id)adjoiningElementGroupWithIdentifier:(id)arg1;	// IMP=0x00000000000747c5
+ (id)topElementGroupWithIdentifier:(id)arg1;	// IMP=0x0000000000074743
- (void).cxx_destruct;	// IMP=0x00000000000749b7
@property(nonatomic) long long maxElementCount; // @synthesize maxElementCount=_maxElementCount;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000074920
- (id)description;	// IMP=0x0000000000074916
- (unsigned long long)hash;	// IMP=0x00000000000748ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000074849
- (id)initWithGroupIdentifier:(id)arg1;	// IMP=0x00000000000746d0

@end

