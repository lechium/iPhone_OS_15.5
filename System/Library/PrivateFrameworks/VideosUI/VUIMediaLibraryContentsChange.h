//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@interface VUIMediaLibraryContentsChange : NSObject <NSCopying>
{
    unsigned long long _revision;	// 8 = 0x8
}

@property(nonatomic) unsigned long long revision; // @synthesize revision=_revision;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000147bf0
- (id)description;	// IMP=0x0000000000147a90
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001479e7
- (unsigned long long)hash;	// IMP=0x00000000001479d5
- (id)initWithRevision:(unsigned long long)arg1;	// IMP=0x0000000000147998
- (id)init;	// IMP=0x0000000000147929

@end

