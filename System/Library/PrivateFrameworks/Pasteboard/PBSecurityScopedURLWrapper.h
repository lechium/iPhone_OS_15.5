//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pasteboard/NSSecureCoding-Protocol.h>

@class FPItem, NSData, NSURL;

@interface PBSecurityScopedURLWrapper : NSObject <NSSecureCoding>
{
    NSData *_scope;	// 8 = 0x8
    _Bool _readonly;	// 16 = 0x10
    _Bool _backedByFileProvider;	// 17 = 0x11
    NSURL *_url;	// 24 = 0x18
    FPItem *_fpItem;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007dfa
- (void).cxx_destruct;	// IMP=0x0000000000007e28
@property(readonly, nonatomic) FPItem *fpItem; // @synthesize fpItem=_fpItem;
@property(readonly, nonatomic, getter=isBackedByFileProvider) _Bool backedByFileProvider; // @synthesize backedByFileProvider=_backedByFileProvider;
@property(readonly, nonatomic, getter=isReadonly) _Bool readonly; // @synthesize readonly=_readonly;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007af5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000789b
- (id)description;	// IMP=0x00000000000077c1
- (id)nsURLWrapper;	// IMP=0x00000000000076c7
- (id)initWithNSURLWrapper:(id)arg1;	// IMP=0x000000000000756f
- (id)initWithURL:(id)arg1 issueExtension:(_Bool)arg2 readonly:(_Bool)arg3 extensionClass:(id)arg4;	// IMP=0x0000000000006ffc
- (id)initWithURLWithoutIssuingExtension:(id)arg1;	// IMP=0x0000000000006fdf
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2 extensionClass:(id)arg3;	// IMP=0x0000000000006fc2
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2;	// IMP=0x0000000000006fad
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000006f99
- (id)initWithFPItem:(id)arg1;	// IMP=0x0000000000006f28

@end

