//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SAUIDecoratedText;

@interface SAUINanoImageResource
{
}

+ (id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000034aab
+ (id)nanoImageResource;	// IMP=0x0000000000034a99
@property(copy, nonatomic) NSString *placeholderImage;
@property(retain, nonatomic) SAUIDecoratedText *monogram;
@property(copy, nonatomic) NSString *imageDownloadType;
@property(nonatomic) _Bool backgroundNeeded;
- (id)encodedClassName;	// IMP=0x0000000000034a8c
- (id)groupIdentifier;	// IMP=0x0000000000034a78

@end
