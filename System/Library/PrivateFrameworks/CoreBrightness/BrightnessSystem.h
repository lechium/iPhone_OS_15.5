//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BrightnessSystem : NSObject
{
    _Bool _initializationComplete;	// 8 = 0x8
}

- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001d56
- (_Bool)isAlsSupported;	// IMP=0x0000000000001d4e
- (id)copyPropertyForKey:(id)arg1;	// IMP=0x0000000000001d46
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000001d3e
- (void)dealloc;	// IMP=0x0000000000001d0f
- (id)init;	// IMP=0x0000000000001ce0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000001cd8

@end

