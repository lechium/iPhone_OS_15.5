//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _ML3ArtworkConfigurationMediaArtworkTypeKey : NSObject <NSCopying>
{
    unsigned int _mediaType;	// 8 = 0x8
    long long _artworkType;	// 16 = 0x10
}

+ (id)keyWithMediaType:(unsigned int)arg1 artworkType:(long long)arg2;	// IMP=0x00000000000cd6c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cd6b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cd66e
- (unsigned long long)hash;	// IMP=0x00000000000cd661

@end
