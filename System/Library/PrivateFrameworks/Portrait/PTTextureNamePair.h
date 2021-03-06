//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface PTTextureNamePair : NSObject
{
    NSString *_name;	// 8 = 0x8
    id <MTLTexture> _texture;	// 16 = 0x10
    struct __IOSurface *_iosurface;	// 24 = 0x18
}

+ (id)createWithName:(id)arg1 texture:(id)arg2;	// IMP=0x000000000002ccaa
- (void).cxx_destruct;	// IMP=0x000000000002cd90
@property struct __IOSurface *iosurface; // @synthesize iosurface=_iosurface;
@property(retain) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(retain) NSString *name; // @synthesize name=_name;

@end

