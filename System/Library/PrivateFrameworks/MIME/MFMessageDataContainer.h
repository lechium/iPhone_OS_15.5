//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface MFMessageDataContainer : NSObject
{
    NSData *_data;	// 8 = 0x8
    _Bool _partial;	// 16 = 0x10
    _Bool _incomplete;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x0000000000012839
- (id)data;	// IMP=0x000000000001282b
- (id)initWithData:(id)arg1;	// IMP=0x00000000000127ac
- (id)initWithData:(id)arg1 partial:(_Bool)arg2 incomplete:(_Bool)arg3;	// IMP=0x0000000000012782

@end

