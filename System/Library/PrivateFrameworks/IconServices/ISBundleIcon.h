//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ISBundleIcon
{
    NSURL *_url;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_tag;	// 32 = 0x20
    NSString *_tagClass;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000180a1
- (void).cxx_destruct;	// IMP=0x00000000000193e8
@property(readonly) NSString *tagClass; // @synthesize tagClass=_tagClass;
@property(readonly) NSString *tag; // @synthesize tag=_tag;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (double)_aspectRatio;	// IMP=0x0000000000019382
- (id)description;	// IMP=0x00000000000192d0
- (id)makeResourceProvider;	// IMP=0x0000000000019278
- (id)_makeAppResourceProvider;	// IMP=0x0000000000018c5a
- (id)_makeDocumentResourceProvider;	// IMP=0x0000000000018769
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018694
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018515
- (id)initWithBundleURL:(id)arg1 fileExtension:(id)arg2;	// IMP=0x00000000000184f4
- (id)initWithBundleURL:(id)arg1 type:(id)arg2;	// IMP=0x00000000000184dc
- (id)initWithBundleURL:(id)arg1;	// IMP=0x00000000000184c2
- (id)initWithBundleURL:(id)arg1 type:(id)arg2 tag:(id)arg3 tagClass:(id)arg4;	// IMP=0x00000000000180a9

@end

