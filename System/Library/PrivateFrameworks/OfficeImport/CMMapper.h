//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/CMMapperRootArchiver-Protocol.h>

@class CMArchiveManager, NSString, OCDDocument;

__attribute__((visibility("hidden")))
@interface CMMapper : NSObject <CMMapperRootArchiver>
{
    CMMapper *mParent;	// 8 = 0x8
    CMMapper *mRoot;	// 16 = 0x10
    OCDDocument *_document;	// 24 = 0x18
    CMArchiveManager *mArchiver;	// 32 = 0x20
    NSString *_fileName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000469afa
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) __weak CMMapper *parent; // @synthesize parent=mParent;
@property(readonly) OCDDocument *document;
- (void)finishMappingWithState:(id)arg1;	// IMP=0x0000000000469ac3
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;	// IMP=0x0000000000469abd
- (void)startMappingWithState:(id)arg1;	// IMP=0x0000000000469ab7
- (void)mapStylesheetAt:(id)arg1 stylesheet:(id)arg2;	// IMP=0x000000000013697d
- (void)mapWithState:(id)arg1;	// IMP=0x00000000004699e4
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000469911
- (void)addStyle:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000469855
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2 embedStyle:(_Bool)arg3;	// IMP=0x00000000000a473c
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2;	// IMP=0x000000000003bebe
- (void)addAttribute:(id)arg1 toNode:(id)arg2 value:(id)arg3;	// IMP=0x000000000003c03d
- (id)archiver;	// IMP=0x00000000000a693d
- (id)root;	// IMP=0x00000000000a5124
- (id)init;	// IMP=0x0000000000469841
- (id)initWithParent:(id)arg1;	// IMP=0x000000000003ab79

@end

