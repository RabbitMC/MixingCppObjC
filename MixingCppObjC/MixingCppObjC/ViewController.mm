//
//  ViewController.m
//  MixingCppObjC
//
//  Created by Miralem Cebic on 27.07.17.
//  Copyright © 2017 Miralem Cebic. All rights reserved.
//

#import "ViewController.h"
#include "Cat.hpp"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)executeCatCode:(UIButton *)sender {
    NSLog(@"Exec Cat.cpp");
    
    int Age;
    std::cout<<"How old is Frisky? ";
    std::cin>>Age;
    Cat Frisky(Age);
    Frisky.Meow();
    std::cout << "Frisky is a cat who is " ;
    std::cout << Frisky.GetAge() << " years old.\n";
    Frisky.Meow();
    Age++;
    Frisky.SetAge(Age);
    std::cout << "Now Frisky is ";
    std::cout << Frisky.GetAge() << " years old.\n";
}

@end
