//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAFlipBookFrame : NSObject
{
    unsigned long long _presentationTime;	// 8 = 0x8
    unsigned long long _frameId;	// 16 = 0x10
    unsigned int _generation;	// 24 = 0x18
    id _userInfo;	// 32 = 0x20
}

- (id)description;	// IMP=0x00000000001d2099
@property(readonly, nonatomic) id userInfo;
- (unsigned int)generation;	// IMP=0x00000000001d2086
@property(readonly, nonatomic) unsigned long long frameId;
@property(readonly, nonatomic) unsigned long long presentationTime;
- (void)dealloc;	// IMP=0x00000000001d200c
- (id)_initWithPresentationTime:(unsigned long long)arg1 frameId:(unsigned long long)arg2 generation:(unsigned int)arg3 userInfo:(id)arg4;	// IMP=0x00000000001d1f78

@end
