//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface CRKChapter : NSObject <NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSArray *_subchapters;	// 16 = 0x10
    NSURL *_webURL;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000031f66
- (void).cxx_destruct;	// IMP=0x0000000000032251
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSArray *subchapters; // @synthesize subchapters=_subchapters;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032121
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000031f6e
@property(readonly, copy, nonatomic) NSDictionary *JSONRepresentation;
- (id)description;	// IMP=0x0000000000031d06
- (id)init;	// IMP=0x0000000000031cb5

@end

