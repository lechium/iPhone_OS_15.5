//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFCancelable-Protocol.h>

@class NSString;

@interface _EFKeyValueObserverHandler : NSObject <EFCancelable>
{
    id _object;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    _Bool _observing;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001df78
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001dea2
- (void)cancel;	// IMP=0x000000000001de69
- (void)startObservingWithOptions:(unsigned long long)arg1;	// IMP=0x000000000001de33
- (void)dealloc;	// IMP=0x000000000001ddc3
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001dcb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
