//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXHost-Protocol.h>

@class NSExtensionContext, NSString;

@interface SXHostExtension : NSObject <SXHost>
{
    _Bool _isActive;	// 8 = 0x8
    NSExtensionContext *_extensionContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004cfdd
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)extensionHostWillEnterForeground:(id)arg1;	// IMP=0x000000000004cf8d
- (void)extensionHostDidEnterBackground:(id)arg1;	// IMP=0x000000000004cf79
- (void)extensionHostDidBecomeActive:(id)arg1;	// IMP=0x000000000004cf62
- (_Bool)canOpenURL:(id)arg1;	// IMP=0x000000000004cf5a
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ced4
@property(readonly, nonatomic) _Bool active;
- (id)initWithExtensionContext:(id)arg1;	// IMP=0x000000000004ccc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
