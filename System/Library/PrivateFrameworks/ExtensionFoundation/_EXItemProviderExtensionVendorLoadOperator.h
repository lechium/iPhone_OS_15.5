//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExtensionFoundation/_EXItemProviderLoading-Protocol.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _EXItemProviderExtensionVendorLoadOperator : NSObject <_EXItemProviderLoading>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSUUID *_extensionContextIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000027ca9
- (void).cxx_destruct;	// IMP=0x00000000000282ca
@property(copy, nonatomic) NSUUID *extensionContextIdentifier; // @synthesize extensionContextIdentifier=_extensionContextIdentifier;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;	// IMP=0x0000000000028092
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;	// IMP=0x0000000000027e5f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027db1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027cb1
- (void)dealloc;	// IMP=0x0000000000027c52
- (id)initWithExtensionContextIdentifier:(id)arg1;	// IMP=0x0000000000027b96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

