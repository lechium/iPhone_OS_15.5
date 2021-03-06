//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IconFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface IFCacheImage <NSSecureCoding>
{
    NSUUID *_uuid;	// 72 = 0x48
    NSData *_validationToken;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000bd60
- (void).cxx_destruct;	// IMP=0x000000000000bfb7
@property(readonly) NSData *validationToken; // @synthesize validationToken=_validationToken;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000be9d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000bd68
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 minimumSize:(struct CGSize)arg3 placeholder:(_Bool)arg4;	// IMP=0x000000000000bcd5
- (id)initWithData:(id)arg1 uuid:(id)arg2 validationToken:(id)arg3;	// IMP=0x000000000000bbdd

@end

