//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUIApps/PXChangeObserver-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUIApps13PXObservation : NSObject <PXChangeObserver>
{
    MISSING_TYPE *observable;	// 8 = 0x8
    MISSING_TYPE *changeHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d3c20
- (id)init;	// IMP=0x00000000000d3bc0
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000d3b50

@end

