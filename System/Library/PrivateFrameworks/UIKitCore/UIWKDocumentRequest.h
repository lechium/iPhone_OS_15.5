//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface UIWKDocumentRequest : NSObject
{
    id <NSCopying> _inputElementIdentifier;	// 8 = 0x8
    long long _flags;	// 16 = 0x10
    long long _surroundingGranularity;	// 24 = 0x18
    long long _granularityCount;	// 32 = 0x20
    struct CGRect _documentRect;	// 40 = 0x28
}

@property(nonatomic) struct CGRect documentRect; // @synthesize documentRect=_documentRect;
@property(nonatomic) long long granularityCount; // @synthesize granularityCount=_granularityCount;
@property(nonatomic) long long surroundingGranularity; // @synthesize surroundingGranularity=_surroundingGranularity;
@property(nonatomic) long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) id <NSCopying> inputElementIdentifier; // @synthesize inputElementIdentifier=_inputElementIdentifier;
- (void)dealloc;	// IMP=0x000000000103f147

@end

