//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>

@class NSIndexPath, NSString, SBFolder;

@interface SBIconModelFolderCreationAction : NSObject <BSDescriptionProviding>
{
    SBFolder *_folder;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000236662
@property(readonly, copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000002365d5
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000236585
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000236569
- (id)succinctDescription;	// IMP=0x0000000000236519
@property(readonly, copy) NSString *description;
- (id)initWithFolder:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000023645a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

