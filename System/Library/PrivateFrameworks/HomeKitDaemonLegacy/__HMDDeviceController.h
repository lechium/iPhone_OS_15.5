//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __HMDDeviceController
{
}

- (void)__handleAddedDevice:(id)arg1;	// IMP=0x000000000063b307
- (void)__handleAddedAccount:(id)arg1;	// IMP=0x000000000063b0ea
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000063ae67
- (void)updateWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000063a910
- (void)dealloc;	// IMP=0x000000000063a86c
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000063a6d4
- (id)init;	// IMP=0x000000000063a62c

@end

