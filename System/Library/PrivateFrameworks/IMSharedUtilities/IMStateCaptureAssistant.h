//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMStateCaptureAssistant : NSObject
{
    unsigned long long _handle;	// 8 = 0x8
}

+ (unsigned long long)registerStateCaptureBlockWithObject:(id)arg1 title:(id)arg2 queue:(id)arg3;	// IMP=0x0000000000048794
@property(nonatomic) unsigned long long handle; // @synthesize handle=_handle;
- (void)deregister;	// IMP=0x000000000004876e
- (void)dealloc;	// IMP=0x0000000000048730
- (id)initWithObject:(id)arg1 title:(id)arg2 queue:(id)arg3;	// IMP=0x000000000004867b

@end

