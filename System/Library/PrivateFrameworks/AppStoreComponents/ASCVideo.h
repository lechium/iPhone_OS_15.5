//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class ASCArtwork, NSString;

@interface ASCVideo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_videoURL;	// 8 = 0x8
    ASCArtwork *_preview;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b96a
- (void).cxx_destruct;	// IMP=0x000000000000bef1
@property(readonly, copy, nonatomic) ASCArtwork *preview; // @synthesize preview=_preview;
@property(readonly, copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
- (id)description;	// IMP=0x000000000000be01
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bc5d
- (unsigned long long)hash;	// IMP=0x000000000000bbab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bba0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000baf2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b972
- (id)initWithVideoURL:(id)arg1 preview:(id)arg2;	// IMP=0x000000000000b8b1

@end
