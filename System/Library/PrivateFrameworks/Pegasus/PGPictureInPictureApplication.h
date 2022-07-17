//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pegasus/NSCopying-Protocol.h>

@class NSString;

@interface PGPictureInPictureApplication : NSObject <NSCopying>
{
    int _processIdentifier;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1;	// IMP=0x0000000000002231
- (void).cxx_destruct;	// IMP=0x0000000000002787
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002769
- (id)description;	// IMP=0x000000000000273d
- (unsigned long long)hash;	// IMP=0x00000000000026f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002696
- (_Bool)isEqualToPGPictureInPictureApplication:(id)arg1;	// IMP=0x00000000000025d9
- (void)dealloc;	// IMP=0x0000000000002563
- (id)init;	// IMP=0x00000000000024de
- (id)initWithProcessIdentifier:(int)arg1;	// IMP=0x0000000000002434

@end
