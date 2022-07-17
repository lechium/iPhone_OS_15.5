//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString;

@interface FCLocalRegion : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSArray *_autoFavoriteTagIDs;	// 16 = 0x10
    NSArray *_localVersionedTagIDs;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSMutableSet *_areas;	// 40 = 0x28
    struct CGRect _rect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000b42d
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSMutableSet *areas; // @synthesize areas=_areas;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *localVersionedTagIDs; // @synthesize localVersionedTagIDs=_localVersionedTagIDs;
@property(readonly, nonatomic) NSArray *autoFavoriteTagIDs; // @synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (struct CGRect)rectForEntireRegion;	// IMP=0x000000000000af9b
- (void)addLocalArea:(id)arg1;	// IMP=0x000000000000af29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000af1e
- (unsigned long long)hash;	// IMP=0x000000000000aeda
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000adff
- (id)description;	// IMP=0x000000000000adb0
- (id)init;	// IMP=0x000000000000ac6b
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000a9d0

@end
