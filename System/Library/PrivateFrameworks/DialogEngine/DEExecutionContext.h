//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEExecutionContext : NSObject
{
    void *_This;	// 8 = 0x8
    shared_ptr_3beef14e _SharedThis;	// 16 = 0x10
}

+ (id)globalParameters;	// IMP=0x00000000001ef90f
- (id).cxx_construct;	// IMP=0x00000000001f0390
- (void).cxx_destruct;	// IMP=0x00000000001f0382
@property shared_ptr_3beef14e SharedThis; // @synthesize SharedThis=_SharedThis;
@property void *This; // @synthesize This=_This;
- (_Bool)isBuiltinType:(id)arg1;	// IMP=0x00000000001f0218
- (id)getBuiltinSemanticConcepts;	// IMP=0x00000000001efcf4
- (void)enableDebugLogging;	// IMP=0x00000000001efcd7
- (void)registerMorphunDataPathFor:(id)arg1 path:(id)arg2;	// IMP=0x00000000001efba7
@property(readonly) NSString *locale;
@property(readonly) NSString *loadStatus;
- (id)upgrade:(id)arg1;	// IMP=0x00000000001eefe2
- (_Bool)needsUpgrade:(id)arg1;	// IMP=0x00000000001eee17
- (void)setTemplateDir:(id)arg1;	// IMP=0x00000000001eed21
- (id)getFile;	// IMP=0x00000000001eec74
- (void)setFile:(id)arg1;	// IMP=0x00000000001eeb93
- (id)findVariable:(id)arg1;	// IMP=0x00000000001eea55
- (void)addVariable:(id)arg1;	// IMP=0x00000000001ee96a
- (_Bool)load:(id)arg1 locale:(id)arg2;	// IMP=0x00000000001ee834
- (id)initWithPtr:(shared_ptr_3beef14e)arg1;	// IMP=0x00000000001ee6e7
- (id)init;	// IMP=0x00000000001ee5a4

@end

