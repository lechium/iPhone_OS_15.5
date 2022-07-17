//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <ClassKit/CLSContextProvider-Protocol.h>
#import <ClassKit/CLSContextProviderInternal-Protocol.h>

@interface CLSContextProviderExtensionContext : NSExtensionContext <CLSContextProviderInternal, CLSContextProvider>
{
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000002cfd2
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000002cf66
- (void)updateDescendantsOfContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002da7d
- (void)updateDescendantsOfContextPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d274
- (void)getMainAppContextPathWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d03e

@end
