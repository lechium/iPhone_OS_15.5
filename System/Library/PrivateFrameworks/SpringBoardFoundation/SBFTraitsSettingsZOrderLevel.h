//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/NSCopying-Protocol.h>
#import <SpringBoardFoundation/NSMutableCopying-Protocol.h>

@interface SBFTraitsSettingsZOrderLevel : NSObject <NSCopying, NSMutableCopying>
{
    double _zOrderLevel;	// 8 = 0x8
}

@property(nonatomic) double zOrderLevel; // @synthesize zOrderLevel=_zOrderLevel;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000305a8
- (id)description;	// IMP=0x000000000003057e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030546
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003053b
- (_Bool)isEqualToZOrderLevelSettings:(id)arg1;	// IMP=0x00000000000304cd
- (id)init;	// IMP=0x00000000000304b8
- (id)initWithZOrderLevelSettings:(id)arg1;	// IMP=0x0000000000030487
- (id)initWithZOrderLevel:(double)arg1;	// IMP=0x0000000000030444

@end

