//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUDictionaryCodable-Protocol.h>

@class NSString;

@interface CUFileQuery : NSObject <CUDictionaryCodable>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000050834
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)description;	// IMP=0x00000000000507ef
- (void)encodeWithDictionary:(id)arg1;	// IMP=0x00000000000507c5
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000506f2

@end

