//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL;

@interface SAVCSContentButton
{
}

+ (id)contentButtonWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000033344
+ (id)contentButton;	// IMP=0x0000000000033332
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSArray *togglePlayPauseCommands;
@property(copy, nonatomic) NSString *contentType;
@property(copy, nonatomic) NSString *canonicalId;
- (id)encodedClassName;	// IMP=0x0000000000033325
- (id)groupIdentifier;	// IMP=0x0000000000033311

@end

