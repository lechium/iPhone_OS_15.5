//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface MCMContainerSchemaActionMove
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destURL;	// 16 = 0x10
}

+ (id)actionIdentifier;	// IMP=0x00200000000201df
- (void).cxx_destruct;	// IMP=0x002000000001fb95
- (_Bool)performWithError:(id *)arg1;	// IMP=0x001000000001f869
- (id)description;	// IMP=0x001000000001f79f
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 context:(id)arg3;	// IMP=0x001000000001f6a5

@end

