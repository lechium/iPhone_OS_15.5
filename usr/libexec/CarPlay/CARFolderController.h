//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBRootFolderController.h>

@protocol CAREnvironment;

@interface CARFolderController : SBRootFolderController
{
    id <CAREnvironment> _environment;	// 8 = 0x8
}

+ (Class)listViewClass;	// IMP=0x004000000009ecb4
+ (Class)_contentViewClass;	// IMP=0x001000000009eca3
- (void).cxx_destruct;	// IMP=0x002000000009ece6
@property(nonatomic) __weak id <CAREnvironment> environment; // @synthesize environment=_environment;
- (_Bool)hasDock;	// IMP=0x001000000009ecc5

@end

