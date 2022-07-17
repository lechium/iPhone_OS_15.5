//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebCore/WebItemProviderRegistrar-Protocol.h>

@class NSData, NSString;
@protocol NSItemProviderWriting;

__attribute__((visibility("hidden")))
@interface WebItemProviderPromisedFileRegistrar : NSObject <WebItemProviderRegistrar>
{
    struct RetainPtr<NSString> _typeIdentifier;	// 8 = 0x8
    struct BlockPtr<void (void (^)(NSURL *, NSError *))> _callback;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000236a1d0
- (void).cxx_destruct;	// IMP=0x000000000236a190
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *typeIdentifier;
- (void)registerItemProvider:(id)arg1;	// IMP=0x0000000002369fd0
- (id)initWithType:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000002369f30

// Remaining properties
@property(readonly, nonatomic) NSData *dataForClient;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <NSItemProviderWriting> representingObjectForClient;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *typeIdentifierForClient;

@end
